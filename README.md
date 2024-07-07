## Course Information
**Course Name:** Algorithmic Problem Solving  
**Course Code:** 23ECSE309  
**Student Name:** Girish Tammanagoudar
**SRN:** 01fe21bcs256  
**Course Instructor:** Prakash Hegade  
**University:** KLE Technological University

## List of Contents
1. [Introduction](#introduction)
2. [Objectives](#Objectives)
3. [Applications](#Applications)
4. [Conclusion](#Conclusion)
## Introduction
Developing a portfolio project centered on a ride-sharing application like Ola or Uber showcases our skills in data structures and algorithms (DSA). These applications require efficient algorithms for tasks such as matching riders with drivers, optimizing routes, managing dynamic pricing, and tracking real-time locations. By implementing key DSA techniques, including graph algorithms, priority queues, and spatial indexing, you can demonstrate your ability to tackle complex, real-world problems with efficient and scalable solutions. 

## Objectives
1. Develop an algorithm to match riders with the nearest available drivers in real-time using priority queues.
2. Implement shortest path algorithms like Dijkstra’s or A* to optimize routes for drivers, reducing travel time and fuel consumption.
3. Create a dynamic pricing model that adjusts ride costs based on supply and demand, utilizing greedy algorithms or machine learning techniques.
4. Design a system to continuously update and track the location of vehicles using spatial data structures like quad trees.
5. Develop a scheduling algorithm that minimizes wait times for riders and maximizes driver efficiency using job scheduling techniques.
6. Implement efficient data structures, such as hash tables and balanced trees, to manage user and driver profiles, ratings, and feedback.
7. Ensure the system can handle high volumes of requests and scale effectively with increasing user base by optimizing data structures and algorithms.
8. Implement secure methods for data storage and communication to protect user and driver information.

## Applications
### Topological Sorting
This can be used to manage dependencies in the system, such as tasks that need to be completed in a specific order. For example, it could help in scheduling drivers based on a sequence of tasks that need to be completed before others.
[Click here to view the implementation](toposort.cpp)

![PLACEHOLDER_image5](https://github.com/Girish2803/ola-uber.github.io/assets/131705564/ed8cde0d-b806-4958-87f7-0e3eab3a3d05)

### Dijkstra's Algorithm
This can be used to find the shortest path between two points, which is essential for route optimization.
[Click here to view the implementation](djikstrals.cpp)

### A Search Algorithm*
An advanced version of Dijkstra's for faster route finding using heuristics.
[Click here to view the implementation](A*search.cpp)

#### Difference between Djikstra's and A* Search
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <table style="border:1px solid black">
        <tr>
        <th>Characteristics</th>
        <th>Djikstrals</th>
        <th>A* search</th>
    </tr>
        <tr>
            <td>Algorithm type</td>
            <td>Greedy</td>
            <td>Informed Search(uses heuristics)</td>
        </tr>
        <tr>
            <td>Initialization</td>
            <td>Tentative distance: 0 for source, infinity for others</td>
            <td>Tentative distance and heuristic function</td>
        </tr>
        <tr>
            <td>Algorithm type</td>
            <td>Greedy</td>
            <td>Informed Search(uses heuristics)</td>
        </tr>
        <tr>
            <td>Heuristic Use</td>
            <td>None</td>
            <td>Uses heuristic to estimate remaining cost to goal</td>
        </tr>
        <tr>
            <td>Algorithm type</td>
            <td>Greedy</td>
            <td>Informed Search(uses heuristics)</td>
        </tr>
        <tr>
            <td>Efficiency</td>
            <td>Less efficient for large graphs</td>
            <td>More efficient with a well-chosen heuristic</td>
        </tr>
        <tr>
            <td>Complexity</td>
            <td>O(V^2) or O((V + E) log V) with priority queue</td>
            <td>Depends on heuristic; typically better than Dijkstra’s</td>
        </tr>
        <tr>
            <td>Strengths</td>
            <td>Guarantees shortest path for all nodes</td>
            <td>Efficient pathfinding with good heuristic</td>
        </tr>
         <tr>
            <td>Weaknesses</td>
            <td>Can be slow for large graphs</td>
            <td>Performance depends on heuristic quality</td>
        </tr>
    </table>
</body>
    
</html>

### Floyd Worshall
For finding shortest paths between all pairs of nodes, useful in pre-computing distances.
[Click here to view implementation](FloydWorshall.cpp)

### Binary heap
For efficiently managing priority queues, such as finding the nearest driver.
[Click here to view implementation](BinaryHeap.cpp)

### Knapsack Problem
Knapsack Problem: For optimizing resource allocation, like deciding the best set of drivers to deploy based on constraints.
[Click here to view implementation](Knapsack.cpp)

### Segment Trees
For efficiently handling range queries and updates, useful in managing dynamic ride pricing or availability queries.
[Click here to view implementation](SegmentTrees.cpp)

### Conclusion
This portfolio demonstrates a robust understanding of data structures and algorithms through practical applications in a ride-sharing context. By tackling real-world problems such as rider-driver matching, route optimization, dynamic pricing, and vehicle tracking, the project highlights the ability to design and implement efficient, scalable, and secure solutions. Each algorithm and data structure has been carefully selected and applied to address specific challenges inherent in ride-sharing applications, reflecting a strong grasp of both theoretical concepts and their practical implications. 
