#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace SharedTypes::Legacy {

struct RenderOffsetsItemComponent {
public:
    // RenderOffsetsItemComponent inner types declare
    // clang-format off
    struct TRS;
    struct ItemTransforms;
    // clang-format on

    // RenderOffsetsItemComponent inner types define
    struct TRS {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 12, std::array<float, 3>> mTranslation;
        ::ll::TypedStorage<4, 12, std::array<float, 3>> mRotation;
        ::ll::TypedStorage<4, 12, std::array<float, 3>> mScale;
#else // @header-generator platform
        ::ll::TypedStorage<4, 12, ::std::array<float, 3>> mTranslation;
        ::ll::TypedStorage<4, 12, ::std::array<float, 3>> mRotation;
        ::ll::TypedStorage<4, 12, ::std::array<float, 3>> mScale;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct ItemTransforms {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 36, ::SharedTypes::Legacy::RenderOffsetsItemComponent::TRS> mFirstPerson;
        ::ll::TypedStorage<4, 36, ::SharedTypes::Legacy::RenderOffsetsItemComponent::TRS> mThirdPerson;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 72, ::SharedTypes::Legacy::RenderOffsetsItemComponent::ItemTransforms> mMainHand;
    ::ll::TypedStorage<4, 72, ::SharedTypes::Legacy::RenderOffsetsItemComponent::ItemTransforms> mOffhand;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI RenderOffsetsItemComponent();

    MCNAPI bool operator==(::SharedTypes::Legacy::RenderOffsetsItemComponent const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::Legacy::RenderOffsetsItemComponent const& other) const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::Legacy
