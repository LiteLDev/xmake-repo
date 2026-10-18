#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/CardinalDirection.h"
#include "mc/deps/input/RectangleArea.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

struct SweepDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> origin;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> dirOrigin;
    ::ll::TypedStorage<4, 4, float>                                   halfAngleCos;
    ::ll::TypedStorage<1, 1, ::ui::CardinalDirection>                 direction;
    ::ll::TypedStorage<8, 16, std::shared_ptr<UIControl>>             ignoreControl;
    ::ll::TypedStorage<1, 1, bool>                                    canWrap;
    ::ll::TypedStorage<1, 1, bool>                                    respectClipping;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                        controlBoundary;
    ::ll::UntypedStorage<4, 20>                                       sweepBoundary;
    // NOLINTEND

public:
    // prevent constructor by default
    SweepDescription& operator=(SweepDescription const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SweepDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/CardinalDirection.h"
#include "mc/deps/input/RectangleArea.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

struct SweepDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec2>                     origin;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                     dirOrigin;
    ::ll::TypedStorage<4, 4, float>                           halfAngleCos;
    ::ll::TypedStorage<1, 1, ::ui::CardinalDirection>         direction;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UIControl>> ignoreControl;
    ::ll::TypedStorage<1, 1, bool>                            canWrap;
    ::ll::TypedStorage<1, 1, bool>                            respectClipping;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                controlBoundary;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                sweepBoundary;
    // NOLINTEND
};
#else // @header-generator platform
struct SweepDescription {};
#endif // @header-generator platform
#endif // @header-generator platform
