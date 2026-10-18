#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class ItemStack;
class Player;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct InteractionParticle {
public:
    // InteractionParticle inner types define
    enum class CopperEventType : uchar {
        None   = 0,
        WaxOn  = 1,
        WaxOff = 2,
        Scrape = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ParticleType>                         mOnStartType;
    ::ll::TypedStorage<4, 4, float>                                  mOffsetY;
    ::ll::TypedStorage<1, 1, bool>                                   mOffsetTowardsInteractor;
    ::ll::TypedStorage<1, 1, ::InteractionParticle::CopperEventType> mCopperEventType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setCopperEventType(std::string const&);
#else // @header-generator platform
    MCAPI void setCopperEventType(::std::string const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setParticleType(std::string const&);
#else // @header-generator platform
    MCAPI void setParticleType(::std::string const& name);
#endif // @header-generator platform
    // NOLINTEND
};
