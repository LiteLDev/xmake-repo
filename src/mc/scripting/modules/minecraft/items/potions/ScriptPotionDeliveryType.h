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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 4> mPotionType;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::Potion::PotionType> mPotionType;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptPotionDeliveryType();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptPotionDeliveryType(::Potion::PotionType);

    MCNAPI ::Potion::PotionType getPotionDeliveryType() const;

    MCNAPI std::string getPotionDeliveryTypeId() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptPotionDeliveryType&
    operator=(::ScriptModuleMinecraft::ScriptPotionDeliveryType&&);
#else // @header-generator platform
    MCAPI ::std::string getPotionDeliveryTypeId() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<Potion::PotionType> tryResolvePotionType(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Potion::PotionType);
#else // @header-generator platform
    MCAPI static ::std::optional<::Potion::PotionType> tryResolvePotionType(::std::string const& potionTypeId);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
