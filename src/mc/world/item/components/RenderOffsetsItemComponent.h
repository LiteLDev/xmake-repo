#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/MatrixStack.h"
#include "mc/deps/shared_types/legacy/item/RenderOffsetsItemComponent.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
class SemVersion;
#if defined(LL_PLAT_A) // @header-generator platform
namespace SharedTypes::Legacy { struct RenderOffsetsItemComponent; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class RenderOffsetsItemComponent : public ::NetworkedItemComponent<RenderOffsetsItemComponent> {
#else // @header-generator platform
class RenderOffsetsItemComponent : public ::NetworkedItemComponent<::RenderOffsetsItemComponent> {
#endif // @header-generator platform
public:
    // RenderOffsetsItemComponent inner types define
    enum class Hand : int {
        MainHand = 0,
        OffHand  = 1,
    };

    enum class Perspective : int {
        FirstPerson = 0,
        ThirdPerson = 1,
    };

    using ItemTransforms = ::SharedTypes::Legacy::RenderOffsetsItemComponent::ItemTransforms;

    using TRS = ::SharedTypes::Legacy::RenderOffsetsItemComponent::TRS;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 72> mMainHand;
    ::ll::UntypedStorage<4, 72> mOffhand;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void buildMatrixFromData(
        ::MatrixStack::MatrixStackRef&,
        ::RenderOffsetsItemComponent::Hand,
        ::RenderOffsetsItemComponent::Perspective
    ) const;
#else // @header-generator platform
    ::ll::TypedStorage<4, 72, ::SharedTypes::Legacy::RenderOffsetsItemComponent::ItemTransforms> mMainHand;
    ::ll::TypedStorage<4, 72, ::SharedTypes::Legacy::RenderOffsetsItemComponent::ItemTransforms> mOffhand;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _buildMatrixFromData(
        ::MatrixStack::MatrixStackRef&,
        ::SharedTypes::Legacy::RenderOffsetsItemComponent::ItemTransforms const&,
        ::RenderOffsetsItemComponent::Perspective
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void _buildMatrixFromData(
        ::MatrixStack::MatrixStackRef&                                           mvs,
        ::SharedTypes::Legacy::RenderOffsetsItemComponent::ItemTransforms const& hand,
        ::RenderOffsetsItemComponent::Perspective                                perspective
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _fromString(::RenderOffsetsItemComponent&, std::string const&);

    MCNAPI static void
    bindType(::cereal::ReflectionCtx&, std::vector<AllExperiments> const&, std::optional<SemVersion>);

    MCNAPI static void buildMatrixFromDefaults(
        ::MatrixStack::MatrixStackRef&,
        ::RenderOffsetsItemComponent::Hand,
        ::RenderOffsetsItemComponent::Perspective,
        float
#else // @header-generator platform
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI static ::HashedString const& getIdentifier();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SharedTypes::Legacy::RenderOffsetsItemComponent::ItemTransforms& Main_Hand_Defaults();
#else // @header-generator platform
    MCAPI static ::SharedTypes::Legacy::RenderOffsetsItemComponent::ItemTransforms& Main_Hand_Defaults();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SharedTypes::Legacy::RenderOffsetsItemComponent::ItemTransforms& Off_Hand_Defaults();
#else // @header-generator platform
    MCAPI static ::SharedTypes::Legacy::RenderOffsetsItemComponent::ItemTransforms& Off_Hand_Defaults();
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
