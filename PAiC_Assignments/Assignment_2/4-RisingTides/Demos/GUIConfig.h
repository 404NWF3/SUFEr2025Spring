RUN_TESTS_MENU_OPTION()

MENU_ORDER("RisingTidesGUI.cpp")

WINDOW_TITLE("Rising Tides")

TEST_ORDER("RisingTides.cpp")

TEST_BARRIER("RisingTidesGUI.cpp",  "RisingTides.cpp")
