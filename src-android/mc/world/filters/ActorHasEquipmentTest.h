#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
struct FilterContext;
struct FilterInputs;
namespace Json { class Value; }
// clang-format on

class ActorHasEquipmentTest : public ::FilterTest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ItemDescriptor> mItemDescriptor;
    ::ll::TypedStorage<4, 4, int>               mEquipmentSlot;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorHasEquipmentTest();

    virtual bool setup(::FilterTest::Definition const&, ::FilterInputs const&);

    virtual bool evaluate(::FilterContext const&) const;

    virtual std::string_view getName() const;

    virtual std::optional<std::variant<bool, int, float, std::string>> getDomain() const;

    virtual std::optional<std::variant<bool, int, float, std::string>> getValue() const;

    virtual ::Json::Value _serializeDomain() const;

    virtual ::Json::Value _serializeValue() const;

    virtual bool _isExpectedItem(std::vector<const ItemStack*> const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $setup(::FilterTest::Definition const&, ::FilterInputs const&);

    MCNAPI bool $evaluate(::FilterContext const&) const;

    MCNAPI std::string_view $getName() const;

    MCNAPI std::optional<std::variant<bool, int, float, std::string>> $getDomain() const;

    MCNAPI std::optional<std::variant<bool, int, float, std::string>> $getValue() const;

    MCNAPI ::Json::Value $_serializeDomain() const;

    MCNAPI ::Json::Value $_serializeValue() const;

    MCNAPI bool $_isExpectedItem(std::vector<const ItemStack*> const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
