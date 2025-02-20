A row in a table represents a relationship among a set of values. That is why a table in the relational model is known as a relation while a row is known as a tuple. 
For each attribute of a relation, we have a permitted set of values that is called the domain of the attribute.

We use the term relation instance for a particular instance of a relation, i.e, a specific set of rows in the relation (table).
# Keys
We need a way in order to uniquely identify a tuple from the value of its attributes. All the values of all the attributes of two tuples simply cannot be the same, as that would essentially be a duplicate in the database.

A superkey is a set of one or more attributes that allow us to uniquely identify a tuple in a relation. A candidate key is basically a minimal Superkey, that is, it doesn't have a subset that is also a superkey.

A primary key is simply just a candidate key that the database designer has identified as the principle means of identifying tuples in a relation.


