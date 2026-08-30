#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Attribute;
class AttributeInstance;
class AttributeInstanceRef;
class AttributeModifier;
class BaseAttributeMap;
class CompoundTag;
class ListTag;
class TemporalAttributeBuff;
struct AttributeModificationContext;
// clang-format on

class SharedAttributes {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::AttributeInstanceRef _legacyGetInstance(::BaseAttributeMap&, std::string const&);

    MCNAPI static std::string const& _legacyGetName(std::string const&);

    MCNAPI static std::unique_ptr<CompoundTag> _saveAttribute(::AttributeInstance const&);

    MCNAPI static void loadAttributes(::BaseAttributeMap*, ::ListTag const*);

    MCNAPI static std::unique_ptr<ListTag> saveAttributes(::BaseAttributeMap const*);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Attribute const& ABSORPTION();

    MCNAPI static ::Attribute const& AIR_DRAG_MODIFIER();

    MCNAPI static ::Attribute const& ATTACK_DAMAGE();

    MCNAPI static ::Attribute const& BOUNCINESS();

    MCNAPI static ::Attribute const& FOLLOW_RANGE();

    MCNAPI static ::Attribute const& FRICTION_MODIFIER();

    MCNAPI static ::Attribute const& HEALTH();

    MCNAPI static ::Attribute const& JUMP_STRENGTH();

    MCNAPI static ::Attribute const& KNOCKBACK_RESISTANCE();

    MCNAPI static ::Attribute const& LAVA_MOVEMENT_SPEED();

    MCNAPI static ::Attribute const& LUCK();

    MCNAPI static ::Attribute const& MOVEMENT_SPEED();

    MCNAPI static ::Attribute const& UNDERWATER_MOVEMENT_SPEED();
    // NOLINTEND
};
