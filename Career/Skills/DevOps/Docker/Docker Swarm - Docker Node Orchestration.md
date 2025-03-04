Docker Swarm is basically two main things:
1. An enterprise-grade secure cluster of Docker Hosts
2. An engine for orchestrating micro-services apps.
# What is a Docker Node?
A docker node is simply a server or a machine that is running docker. On the clustering side of things, Docker Swarm lets you manage these clusters of docker nodes in a very easy way.

> Docker Swarm Competes with Kubernetes Directly!
# How Does Docker Swarm Work
Docker swarm configures nodes as either **Managers** or **Workers**. Managers look after the control plane of the cluster, that is things like managing the state of the cluster as well as dispatching tasks to the worker nodes, etc.

TLS is built into Docker Swarm, i.e, any communication that is happening over the network is inherently going to be encrypted and completely secure. The configuration and state of the docker swarm is held in an **etcd** database and is kept extremely up-to-date on every single docker node.

The atomic unit of scheduling in this case, is a service, which is similar to a wrapper around containers, i.e, its a container with some additional features.
# Initializing a new Docker Swarm
Docker nodes that are not part of a swarm are said to be in **single-engine** mode. Once they are added to the swarm, they are automatically switched into swarm mode. 

Docker swarm can be initialized using the following command in manager mode
`docker swarm init --advertise-addr <swarm_address> --listen-addr <local_addr>`

It's recommended to simply use all the flags, because you can set the advertise_addr to the address of a load-balancer as well.

The advertise_addr is the outbound address that other nodes will send requests and swarm traffic to, while the listen-addr is the actual local address on the docker node that is configured to be used for swarm traffic.


