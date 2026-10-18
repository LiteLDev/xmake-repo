#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeBuff.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/attribute/AttributeBuffType.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
struct HurtEffectsSettings;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class InstantaneousAttributeBuff : public ::AttributeBuff {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    InstantaneousAttributeBuff();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~InstantaneousAttributeBuff();
#else // @header-generator platform
    virtual ~InstantaneousAttributeBuff() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInstantaneous() const;
#else // @header-generator platform
    virtual bool isInstantaneous() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isSerializable() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InstantaneousAttributeBuff(float, ::ActorDamageSource const&, std::optional<HurtEffectsSettings> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(float, ::ActorDamageSource const&, std::optional<HurtEffectsSettings> const&);
#else // @header-generator platform
    virtual bool isSerializable() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInstantaneous() const;
#else // @header-generator platform
    MCFOLD bool $isInstantaneous() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSerializable() const;
#else // @header-generator platform
    MCFOLD bool $isSerializable() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
