#include "script_component.hpp"
class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { "cba_common", "cba_hashes", "cba_keybinding", "A3_UI_F" };
        version = VERSION;
        author[] = {"alef", "Rocko", "Sickboy"};
        authorUrl = "https://github.com/CBATeam/CBA_A3";
    };
};

#include "CfgRscStd.hpp"
#include "CfgEventhandlers.hpp"


