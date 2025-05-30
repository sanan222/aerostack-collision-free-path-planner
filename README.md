# Mission Planning Workspace

## Setup Instructions

1. **Place the Folder:**  
   Place the folder in the `src` directory of the `mission_planning_ws` workspace.

2. **Running the Code:**

   - **Terminal 1:**  
     Launch the AS2 environment with:
     ```bash
     ./launch_as2.bash -s scenarios/scenario1.yaml
     ```

   - **Terminal 2:**  
     Start the mission scenario with:
     ```bash
     python3 mission_scenario.py -s scenarios/scenario1.yaml
     ```

## Modified/Added Files

- **`mission_scenario.py`**  
  Contains the main mission logic.

- **`mission_utils.py`**  
  Provides utilities for visualization, ArUco marker handling, metrics, and motion planning.

- **`tsp_compare.py`**  
  Implements different TSP solvers to find the optimal solution.

## Note on OpenCV API Compatibility

Sometimes, when running:
```bash
python3 mission_scenario.py -s scenarios/scenario1.yaml
```

you may encounter an error related to the following line:

```bash
self.aruco_params = cv2.aruco.DetectorParameters_create()
```

This error occurs because the function `DetectorParameters_create()` is not available in newer versions of the OpenCV API. If you see an error message suggesting:

```bash
did you mean DetectorParameters()?
```
Simply change the function call to:

```bash
self.aruco_params = cv2.aruco.DetectorParameters()
```
