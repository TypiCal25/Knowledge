1. char(n): Fixed length character string with user-specified length.
2. varchar(n): A variable length character string with user-specified maximum length.
3. int
4. smallint
5. numeric(d,p): Here 1 digit is used for the sign.
# SQL Commands
The from clause, basically generates a Cartesian Product of the relations

select, from, where but intuitively it should be from where select

The from clause creates a cartesian product. The where clause applies some predicate, while the select chooses which attributes of this cartesian product should be shown.
## When do we need to Rename
1. When we want to compares entries from the same relation.
2. When we have clashing names in the tables that are being used in the select from where clause.
