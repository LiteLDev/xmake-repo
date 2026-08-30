#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/tutorial/GameTip.h"
#include "mc/deps/input/InputMode.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
// clang-format on

class HotbarGameTip : public ::GameTip {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, std::optional<int>> mHotbarIndexForTip;
    // NOLINTEND

public:
    // prevent constructor by default
    HotbarGameTip();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HotbarGameTip() = 0;

    virtual ::GameTip::UIAnchors getUIAnchors() const;

    virtual std::array<std::string, 2> getCustomOffset() const;

    virtual ::GameTip::ArrowDirection getArrowDirection() const;

    virtual std::string getArrowOffset() const;

    virtual ::GameTip::ArrowAnchor getArrowAnchor() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _setHotbarIndexForTip(int);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::GameTip::UIAnchors $getUIAnchors() const;

    MCNAPI std::array<std::string, 2> $getCustomOffset() const;

    MCNAPI ::GameTip::ArrowDirection $getArrowDirection() const;

    MCNAPI std::string $getArrowOffset() const;

    MCNAPI ::GameTip::ArrowAnchor $getArrowAnchor() const;
    // NOLINTEND
};
