Modern applications have a lot of smaller services that are running. These services come together in order to bring about a functioning application. This is where things like Docker Compose come in to be extremely useful.
# History Behind Docker Compose
In the beginning there was Fig, which was a python tool that made use of the Docker API in order to manage multi docker images. This was obtained by Docker Inc., and was re-branded into Docker Compose.
# YAML Files
YAML stands for "Yet Another Markup Language". It is a subset of JSON files. 
[[YAML Syntax]]
# Docker Compose Commands
Whenever you `docker compose up &`, it automatically creates the images as well as the containers. On the other hand, whenever you do `docker compose down`, it gracefully shuts down all the containers and removes them. On the other hand, it doesn't do anything to the attached volumes because the volumes are meant to be long-term persistent storage in the first place.


