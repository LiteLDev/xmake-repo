#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIAnim.h"

// auto generated forward declare list
// clang-format off
class UIControl;
class UIResolvedDef;
// clang-format on

class UIAnimUV : public ::UIAnim {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mFromUV;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mToUV;
    // NOLINTEND

public:
    // prevent constructor by default
    UIAnimUV& operator=(UIAnimUV const&);
    UIAnimUV();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UIAnimUV();

    virtual std::shared_ptr<UIAnim> clone();

    virtual bool tick(::UIControl&, float const);

    virtual void _reset(::UIControl&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<UIAnim> $clone();

    MCNAPI bool $tick(::UIControl&, float const);

    MCNAPI void $_reset(::UIControl&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
