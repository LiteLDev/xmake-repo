#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/item/enchanting/Enchant.h"
#include "mc/world/item/enchanting/EnchantmentInstance.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ListTag;
class ReadOnlyBinaryStream;
struct EnchantResult;
// clang-format on

class ItemEnchants {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                              mSlot;
    ::ll::TypedStorage<8, 72, std::array<std::vector<EnchantmentInstance>, 3>> mItemEnchants;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemEnchants();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ItemEnchants(int);

    MCNAPI ItemEnchants(int, ::ListTag const&);

    MCNAPI void _fromList(::ListTag const&);

    MCNAPI std::unique_ptr<ListTag> _toList() const;

    MCNAPI bool addEnchant(::EnchantmentInstance, bool);

    MCNAPI int addEnchants(::ItemEnchants const&, bool);

    MCNAPI ::EnchantResult canEnchant(::EnchantmentInstance, bool);

    MCNAPI int count() const;

    MCNAPI std::vector<EnchantmentInstance> getAllEnchants() const;

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
    // NOLINTEND
};
