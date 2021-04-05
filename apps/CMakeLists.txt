add_executable(server server.cpp)
add_executable(client client.cpp)

target_link_libraries(server lindwurm)
target_link_libraries(client lindwurm)
