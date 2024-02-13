% Define mission area dimensions
mission_area_length = 10; % in km
mission_area_width = 10; % in km

% Number of UAVs to deploy
num_UAVs = 30;

% Generate random positions for UAVs
uav_positions = rand(num_UAVs, 2) .* [mission_area_length, mission_area_width];

% Calculate the center of the mission area for HAP deployment
hap_position = [mission_area_length/2, mission_area_width/2];

% Plot the mission area
figure;
hold on;
title('HAP and UAV Deployment');
xlabel('Distance (km)');
ylabel('Distance (km)');
xlim([0, mission_area_length]);
ylim([0, mission_area_width]);

% Plot HAP
plot(hap_position(1), hap_position(2), 'ro', 'MarkerSize', 10, 'LineWidth', 2, 'DisplayName', 'HAP');

% Plot UAVs
for i = 1:num_UAVs
    plot(uav_positions(i, 1), uav_positions(i, 2), 'b^', 'MarkerSize', 8, 'LineWidth', 1, 'DisplayName', ['UAV ', num2str(i)]);
end

% Generate random positions for mobile devices
num_mobile_devices = 100;
mobile_device_positions = rand(num_mobile_devices, 2) .* [mission_area_length, mission_area_width];

% Plot mobile devices
for i = 1:num_mobile_devices
    plot(mobile_device_positions(i, 1), mobile_device_positions(i, 2), 'k.', 'MarkerSize', 8, 'LineWidth', 1);
end

% Find UAVs covering the mobile devices
for i = 1:num_mobile_devices
    distances_to_uavs = sqrt(sum((uav_positions - mobile_device_positions(i, :)).^2, 2));
    [~, closest_uav_index] = min(distances_to_uavs);
    plot([mobile_device_positions(i, 1), uav_positions(closest_uav_index, 1)], ...
         [mobile_device_positions(i, 2), uav_positions(closest_uav_index, 2)], ...
         'g--', 'LineWidth', 1);
end

legend('Location', 'best');
hold off;
