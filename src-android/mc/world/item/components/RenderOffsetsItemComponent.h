#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/MatrixStack.h"
#include "mc/deps/shared_types/legacy/item/RenderOffsetsItemComponent.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class HashedString;
class SemVersion;
namespace SharedTypes::Legacy { struct RenderOffsetsItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class RenderOffsetsItemComponent : public ::NetworkedItemComponent<RenderOffsetsItemComponent> {
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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _buildMatrixFromData(
        ::MatrixStack::MatrixStackRef&,
        ::SharedTypes::Legacy::RenderOffsetsItemComponent::ItemTransforms const&,
        ::RenderOffsetsItemComponent::Perspective
    );

    MCNAPI static void _fromString(::RenderOffsetsItemComponent&, std::string const&);

    MCNAPI static void
    bindType(::cereal::ReflectionCtx&, std::vector<AllExperiments> const&, std::optional<SemVersion>);

    MCNAPI static void buildMatrixFromDefaults(
        ::MatrixStack::MatrixStackRef&,
        ::RenderOffsetsItemComponent::Hand,
        ::RenderOffsetsItemComponent::Perspective,
        float
    );

    MCNAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SharedTypes::Legacy::RenderOffsetsItemComponent::ItemTransforms& Main_Hand_Defaults();

    MCNAPI static ::SharedTypes::Legacy::RenderOffsetsItemComponent::ItemTransforms& Off_Hand_Defaults();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
