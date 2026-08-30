#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class Minecraft;
// clang-format on

class VideoCaptureSessionManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::function<bool()>>> mVideoCaptureSessionUpdates;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VideoCaptureSessionManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool hasSessions() const;

    MCNAPI std::shared_ptr<void> manage(::Minecraft&, uint, std::string);

    MCNAPI void update();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
