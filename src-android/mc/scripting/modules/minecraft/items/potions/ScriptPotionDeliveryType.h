#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/alchemy/Potion.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPotionDeliveryType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mPotionType;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPotionDeliveryType();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptPotionDeliveryType(::Potion::PotionType);

    MCNAPI ::Potion::PotionType getPotionDeliveryType() const;

    MCNAPI std::string getPotionDeliveryTypeId() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptPotionDeliveryType&
    operator=(::ScriptModuleMinecraft::ScriptPotionDeliveryType&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static std::optional<Potion::PotionType> tryResolvePotionType(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Potion::PotionType);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
