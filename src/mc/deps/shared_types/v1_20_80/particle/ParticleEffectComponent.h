#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleEffectComponent {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ParticleEffectComponent();
#else // @header-generator platform
    virtual ~ParticleEffectComponent() = default;
#endif // @header-generator platform

    virtual ::HashedString const& getIdentifier() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::HashedString const& EmptyID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::HashedString const& EmptyID();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
