#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceDelegate.h"

// auto generated forward declare list
// clang-format off
class AttributeBuff;
class AttributeInstance;
#if defined(LL_PLAT_A) // @header-generator platform
class AttributeInstanceConstRef;
#else // @header-generator platform
#endif // @header-generator platform
class Mob;
struct AttributeModificationContext;
// clang-format on

class HealthAttributeDelegate : public ::AttributeInstanceDelegate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>    mTickCounter;
    ::ll::TypedStorage<8, 8, ::Mob*> mMob;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    HealthAttributeDelegate();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~HealthAttributeDelegate();
#else // @header-generator platform
    virtual void tick(::AttributeInstance& mutableInstance, ::AttributeModificationContext& context) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::AttributeInstance&, ::AttributeModificationContext&);
#else // @header-generator platform
    virtual bool willChange(float oldValue, float newValue, ::AttributeBuff const& buff) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool willChange(float, float, ::AttributeBuff const&);
#else // @header-generator platform
    virtual ::std::optional<float> change(float oldValue, float newValue, ::AttributeBuff const& buff) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<float> change(float, float, ::AttributeBuff const&);

    virtual float getBuffValueWithModifiers(::AttributeBuff const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HealthAttributeDelegate(::AttributeInstanceConstRef, ::Mob*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AttributeInstanceConstRef, ::Mob*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual float getBuffValueWithModifiers(::AttributeBuff const& buff) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::AttributeInstance&, ::AttributeModificationContext&);
#else // @header-generator platform
    MCAPI void $tick(::AttributeInstance& mutableInstance, ::AttributeModificationContext& context);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $willChange(float, float, ::AttributeBuff const&);
#else // @header-generator platform
    MCAPI bool $willChange(float oldValue, float newValue, ::AttributeBuff const& buff);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<float> $change(float, float, ::AttributeBuff const&);
#else // @header-generator platform
    MCAPI ::std::optional<float> $change(float oldValue, float newValue, ::AttributeBuff const& buff);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getBuffValueWithModifiers(::AttributeBuff const&) const;
#else // @header-generator platform
    MCAPI float $getBuffValueWithModifiers(::AttributeBuff const& buff) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
