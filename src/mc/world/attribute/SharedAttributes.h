#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Attribute;
class AttributeInstance;
class AttributeInstanceRef;
#if defined(LL_PLAT_A) // @header-generator platform
class AttributeModifier;
#else // @header-generator platform
#endif // @header-generator platform
class BaseAttributeMap;
class CompoundTag;
class ListTag;
#if defined(LL_PLAT_A) // @header-generator platform
class TemporalAttributeBuff;
struct AttributeModificationContext;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class SharedAttributes {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::AttributeInstanceRef _legacyGetInstance(::BaseAttributeMap&, std::string const&);
#else // @header-generator platform
    MCAPI static ::AttributeInstanceRef
    _legacyGetInstance(::BaseAttributeMap& attributes, ::std::string const& attributeName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& _legacyGetName(std::string const&);
#else // @header-generator platform
    MCAPI static ::std::string const& _legacyGetName(::std::string const& attributeName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<CompoundTag> _saveAttribute(::AttributeInstance const&);
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::CompoundTag> _saveAttribute(::AttributeInstance const& instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void loadAttributes(::BaseAttributeMap*, ::ListTag const*);
#else // @header-generator platform
    MCAPI static void loadAttributes(::BaseAttributeMap* attributes, ::ListTag const* list);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<ListTag> saveAttributes(::BaseAttributeMap const*);
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::ListTag> saveAttributes(::BaseAttributeMap const* attributes);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Attribute const& ABSORPTION();
#else // @header-generator platform
    MCAPI static ::Attribute const& ABSORPTION();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Attribute const& AIR_DRAG_MODIFIER();
#else // @header-generator platform
    MCAPI static ::Attribute const& AIR_DRAG_MODIFIER();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Attribute const& ATTACK_DAMAGE();
#else // @header-generator platform
    MCAPI static ::Attribute const& ATTACK_DAMAGE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Attribute const& BOUNCINESS();
#else // @header-generator platform
    MCAPI static ::Attribute const& BOUNCINESS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Attribute const& FOLLOW_RANGE();
#else // @header-generator platform
    MCAPI static ::Attribute const& FOLLOW_RANGE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Attribute const& FRICTION_MODIFIER();
#else // @header-generator platform
    MCAPI static ::Attribute const& FRICTION_MODIFIER();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Attribute const& HEALTH();
#else // @header-generator platform
    MCAPI static ::Attribute const& HEALTH();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Attribute const& JUMP_STRENGTH();
#else // @header-generator platform
    MCAPI static ::Attribute const& JUMP_STRENGTH();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Attribute const& KNOCKBACK_RESISTANCE();
#else // @header-generator platform
    MCAPI static ::Attribute const& KNOCKBACK_RESISTANCE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Attribute const& LAVA_MOVEMENT_SPEED();
#else // @header-generator platform
    MCAPI static ::Attribute const& LAVA_MOVEMENT_SPEED();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Attribute const& LUCK();
#else // @header-generator platform
    MCAPI static ::Attribute const& LUCK();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Attribute const& MOVEMENT_SPEED();
#else // @header-generator platform
    MCAPI static ::Attribute const& MOVEMENT_SPEED();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Attribute const& UNDERWATER_MOVEMENT_SPEED();
#else // @header-generator platform
    MCAPI static ::Attribute const& UNDERWATER_MOVEMENT_SPEED();
#endif // @header-generator platform
    // NOLINTEND
};
