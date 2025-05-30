# Structural Inspection Path Planning for Drones (Aerostack Implementation)

## Overview

This project addresses the structural inspection path-planning problem using autonomous aerial robots. The goal is to optimize the inspection route to minimize energy consumption, total distance, and mission duration while safely navigating obstacles and detecting ArUco markers at designated viewpoints.

Video demonstration of the project can be found [here](https://youtu.be/b41qtKMcLnA)

### Key Objectives:
- Plan efficient routes to visit all viewpoints.
- Use combinatorial optimization for global path planning.
- Detect and validate ArUco markers against reference data.
- Compute performance metrics: distance, duration, and average speed.

## Setup Instructions

1. **Place the Folder**  
   Place the folder in the `src` directory of the `mission_planning_ws` workspace.

2. **Running the Code**

   - **Terminal 1**  
     Launch the AS2 environment with:
     ```bash
     ./launch_as2.bash -s scenarios/scenario1.yaml
     ```

   - **Terminal 2**  
     Start the mission scenario with:
     ```bash
     python3 mission_scenario.py -s scenarios/scenario1.yaml
     ```

## Core Components

- `mission_scenario.py`  
  Main logic for mission execution and path planning.

- `mission_utils.py`  
  Utilities for motion planning, marker validation, metrics tracking, and visualization.

- `tsp_compare.py`  
  Implements and compares multiple TSP solvers including Nearest Neighbor and Ant Colony Optimization.

## Methodology Summary

### 1. Waypoint Sequencing
Implements TSP solvers:
- **Heuristic Nearest Neighbor (HN):** A greedy algorithm that constructs the path by always visiting the nearest unvisited viewpoint.
- **Ant Colony Optimization (ACO):** Probabilistic technique inspired by ant foraging behavior. Paths are reinforced via simulated pheromone levels, balancing exploration and exploitation.

### 2. Motion Planning
- Direct motion is used when no obstacles are in the way.
- A* algorithm is applied when obstacle avoidance is needed.
- A filtering step removes redundant waypoints using collision checking.

### 3. Obstacle Avoidance
- `check_collision()` verifies if a straight line from start to goal intersects any obstacles.
- Points are sampled along the line and checked against bounding boxes of known obstacles with a safety margin.

### 4. ArUco Marker Validation
- Uses grayscale camera input to detect markers.
- Marker IDs are cross-validated against those defined in `world.yaml` generated from the scenario configuration.

## Results Summary

| Scenario | Algorithm | Distance (m) | Duration (s) | Avg Speed (m/s) |
|----------|-----------|--------------|--------------|-----------------|
| 1        | NN        | 66.55        | 65.15        | 1.02            |
| 1        | AC        | 60.29        | 63.84        | 0.94            |
| 2        | NN        | 67.51        | 73.71        | 0.92            |
| 2        | AC        | 60.77        | 66.83        | 0.91            |
| 3        | NN        | 99.56        | 117.03       | 0.85            |
| 3        | AC        | 83.61        | 105.55       | 0.79            |
| 4        | NN        | 53.00        | 56.24        | 0.94            |
| 4        | AC        | 58.48        | 71.21        | 0.82            |

- Ant Colony (AC) Optimization performs better in complex scenarios.
- Nearest Neighbor (NN) is more effective in simpler environments with fewer obstacles.

## Advanced Notes

- **Global Optimization:**  
  Future enhancements may include Particle Swarm Optimization (PSO), Rapidly-exploring Random Trees (RRT), or Probabilistic Roadmaps (PRM).

- **Energy-Aware Planning:**  
  Smooth trajectories using Dubins paths can minimize sharp turns, reducing energy consumption. Planning the entire route upfront improves execution efficiency.

## OpenCV Compatibility Note

If you encounter the following error:
```bash
AttributeError: module 'cv2.aruco' has no attribute 'DetectorParameters_create'
```

Replace:
```python
self.aruco_params = cv2.aruco.DetectorParameters_create()
```

With:
```python
self.aruco_params = cv2.aruco.DetectorParameters()
```

## Acknowledgements

This work was completed as part of the COMP0246 Aerial Robotics coursework at UCL.

Author: Sanan Garayev  
Date: March 2025
