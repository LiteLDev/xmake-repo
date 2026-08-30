#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ISceneStackNavigator.h"

// auto generated forward declare list
// clang-format off
class TextToSpeechSystem;
// clang-format on

class SceneStackNavigator : public ::ISceneStackNavigator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk4f64aa;
    ::ll::UntypedStorage<8, 64> mUnk3e3280;
    // NOLINTEND

public:
    // prevent constructor by default
    SceneStackNavigator& operator=(SceneStackNavigator const&);
    SceneStackNavigator(SceneStackNavigator const&);
    SceneStackNavigator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void toPreStartScreen(bool initialNavigation) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $toPreStartScreen(bool initialNavigation);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
