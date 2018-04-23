workspace "glider"
  configurations { "Release", "Debug" }
  language "C++"
  flags { "C++11" }
  includedirs { "." }

  filter "action:vs*"
    platforms { "x86_64", "x86" }
  
  filter "platforms:x86"
    architecture "x86"
  filter "platforms:x86_64"
    architecture "x86_64"

  filter "action:gmake"
    symbols "On"
  
  filter "configurations:Debug"
    symbols "On"
  filter "configurations:Release"
    optimize "Full"
  filter {}

  project "glider"
    kind "ConsoleApp"
    filter {}
    files {
      "glider/*.cc",
      "glider/*.h"
    }