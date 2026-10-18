#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/item/enchanting/Enchant.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/enchanting/EnchantmentInstance.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BinaryStream;
#else // @header-generator platform
class EnchantmentInstance;
#endif // @header-generator platform
class ListTag;
#if defined(LL_PLAT_A) // @header-generator platform
class ReadOnlyBinaryStream;
#else // @header-generator platform
#endif // @header-generator platform
struct EnchantResult;
// clang-format on

class ItemEnchants {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                              mSlot;
    ::ll::TypedStorage<8, 72, std::array<std::vector<EnchantmentInstance>, 3>> mItemEnchants;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                    mSlot;
    ::ll::TypedStorage<8, 72, ::std::array<::std::vector<::EnchantmentInstance>, 3>> mItemEnchants;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ItemEnchants();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ItemEnchants(int);
#else // @header-generator platform
    MCAPI void _fromList(::ListTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemEnchants(int, ::ListTag const&);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::ListTag> _toList() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _fromList(::ListTag const&);
#else // @header-generator platform
    MCAPI int addEnchants(::ItemEnchants const& enchants, bool allowNonVanilla);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<ListTag> _toList() const;
#else // @header-generator platform
    MCAPI ::EnchantResult canEnchant(::EnchantmentInstance enchant, bool allowNonVanilla);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool addEnchant(::EnchantmentInstance, bool);
#else // @header-generator platform
    MCAPI ::std::vector<::EnchantmentInstance> getAllEnchants() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int addEnchants(::ItemEnchants const&, bool);
#else // @header-generator platform
    MCAPI ::std::array<::std::vector<::EnchantmentInstance>, 3> getEnchantInstances() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EnchantResult canEnchant(::EnchantmentInstance, bool);
#else // @header-generator platform
    MCAPI ::std::vector<::std::string> getEnchantNames() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int count() const;
#else // @header-generator platform
    MCAPI int getTotalValue(bool bookModifier) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<EnchantmentInstance> getAllEnchants() const;
#else // @header-generator platform
    MCAPI bool operator==(::ItemEnchants const& rhs) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::array<std::vector<EnchantmentInstance>, 3> getEnchantInstances() const;

    MCNAPI std::vector<std::string> getEnchantNames() const;

    MCNAPI ::EnchantmentInstance getEnchantment(::Enchant::Type);

    MCNAPI std::vector<EnchantmentInstance> const& getEnchants(int) const;

    MCNAPI int getSlot() const;

    MCNAPI int getTotalValue(bool) const;

    MCNAPI int hasEnchant(::Enchant::Type) const;

    MCNAPI bool isEmpty() const;

    MCNAPI bool operator==(::ItemEnchants const&) const;

    MCNAPI void removeEnchantment(::Enchant::Type);

    MCNAPI void setEnchantInstances(std::array<std::vector<EnchantmentInstance>, 3>);

    MCNAPI void setSlot(int);

    MCNAPI ~ItemEnchants();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int);

    MCNAPI void* $ctor(int, ::ListTag const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void setEnchantInstances(::std::array<::std::vector<::EnchantmentInstance>, 3> enchants);
#endif // @header-generator platform
    // NOLINTEND
};
