add_rules("mode.debug", "mode.release")

add_rules("mode.debug", "mode.release")
add_rules("plugin.vsxmake.autoupdate")

add_requires("glfw")
add_packages("glfw")

target("usb-keylogger")
set_kind("binary")
add_files("src/*.cpp")