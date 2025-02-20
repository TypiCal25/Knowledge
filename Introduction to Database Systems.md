# Definition
A database management system is a collection of inter-related data and a set of programs to access or manipulate those data.

It should be both convenient as well as efficient.
# Why Not Just Store Data Directly in Files
1. Data redundancy and inconsistency
2. Difficulty in accessing data
3. Data isolation
4. Integrity problems
5. Atomicity problems
6. Concurrent Access Problems
7. Security Problems
# Data Abstraction
There are three levels of data abstraction when it comes to a database.
1. Physical Level
2. Logical Level
3. View Level
## Physical Level
In order to bring out the best performance and storage of data, the lowest level of abstraction, actually describes how the data is actually stored. This may include complex low-level data structures in detail.
## Logical Level
This is one step above the physical level. In this level, the user does not need to know the underlying complexity of the data structures that are being used. As such, this level describes what data is present in the database and what relationships exist among the data.
## View Level
The highest level of abstraction describes only a part of the database itself.
# Instances and Schema
The data in a database changes over time as information is inserted into and deleted from the database. The collection of data that is stored inside the database at any given point of time is known as an instance of the database. The overall design of the database is also known as the schema of the database.
