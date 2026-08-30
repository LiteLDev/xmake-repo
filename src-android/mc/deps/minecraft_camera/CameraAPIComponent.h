#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ICameraAPI;
// clang-format on

struct CameraAPIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<ICameraAPI>> mApi;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAPIComponent& operator=(CameraAPIComponent const&);
    CameraAPIComponent(CameraAPIComponent const&);
    CameraAPIComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ICameraAPI& get();
    // NOLINTEND
};
