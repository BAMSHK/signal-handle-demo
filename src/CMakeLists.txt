PROJECT(example)

cmake_minimum_required(VERSION 3.13)


aux_source_directory(. SRC)

add_executable(${TARGET} ${SRC})

# 编译后立即执行
add_custom_command(
    TARGET ${TARGET}
    POST_BUILD
    COMMAND ${TARGET}
)
