#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEffectComponent.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleMotionParametricComponent : public ::SharedTypes::v1_20_80::ParticleEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, std::optional<std::array<SharedTypes::Legacy::ExpressionNode, 3>>> mRelativePositionExpr;
    ::ll::TypedStorage<8, 128, std::optional<std::array<SharedTypes::Legacy::ExpressionNode, 3>>> mDirectionExpr;
    ::ll::TypedStorage<8, 48, std::optional<SharedTypes::Legacy::ExpressionNode>>                 mRotationExpr;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleMotionParametricComponent();

    virtual ::HashedString const& getIdentifier() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::SharedTypes::v1_20_80::ParticleMotionParametricComponent const&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& NameID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::HashedString const& $getIdentifier() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
