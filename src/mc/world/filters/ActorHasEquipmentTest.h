#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ItemDescriptor> mItemDescriptor;
    ::ll::TypedStorage<4, 4, int>               mEquipmentSlot;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkc85f7c;
    ::ll::UntypedStorage<4, 4>  mUnk32c4a4;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ActorHasEquipmentTest& operator=(ActorHasEquipmentTest const&);
    ActorHasEquipmentTest(ActorHasEquipmentTest const&);
    ActorHasEquipmentTest();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ActorHasEquipmentTest();
#else // @header-generator platform
    virtual bool setup(::FilterTest::Definition const& definition, ::FilterInputs const& inputs) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool setup(::FilterTest::Definition const&, ::FilterInputs const&);
#else // @header-generator platform
    virtual bool evaluate(::FilterContext const& context) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool evaluate(::FilterContext const&) const;
#else // @header-generator platform
    virtual ::std::string_view getName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string_view getName() const;
#else // @header-generator platform
    virtual ::std::optional<::std::variant<bool, int, float, ::std::string>> getValue() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<std::variant<bool, int, float, std::string>> getDomain() const;
#else // @header-generator platform
    virtual ::std::optional<::std::variant<bool, int, float, ::std::string>> getDomain() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<std::variant<bool, int, float, std::string>> getValue() const;
#else // @header-generator platform
    virtual ::Json::Value _serializeValue() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Json::Value _serializeDomain() const;
#else // @header-generator platform
    virtual ::Json::Value _serializeDomain() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Json::Value _serializeValue() const;

    virtual bool _isExpectedItem(std::vector<const ItemStack*> const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool _isExpectedItem(::std::vector<::ItemStack const*> const& itemList) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $setup(::FilterTest::Definition const&, ::FilterInputs const&);
#else // @header-generator platform
    MCNAPI bool $setup(::FilterTest::Definition const& definition, ::FilterInputs const& inputs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $evaluate(::FilterContext const&) const;
#else // @header-generator platform
    MCNAPI bool $evaluate(::FilterContext const& context) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string_view $getName() const;
#else // @header-generator platform
    MCNAPI ::std::string_view $getName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::variant<bool, int, float, std::string>> $getDomain() const;
#else // @header-generator platform
    MCNAPI ::std::optional<::std::variant<bool, int, float, ::std::string>> $getValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::variant<bool, int, float, std::string>> $getValue() const;

    MCNAPI ::Json::Value $_serializeDomain() const;
#else // @header-generator platform
    MCNAPI ::std::optional<::std::variant<bool, int, float, ::std::string>> $getDomain() const;
#endif // @header-generator platform

    MCNAPI ::Json::Value $_serializeValue() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_isExpectedItem(std::vector<const ItemStack*> const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCNAPI ::Json::Value $_serializeDomain() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI bool $_isExpectedItem(::std::vector<::ItemStack const*> const& itemList) const;


#endif // @header-generator platform
    // NOLINTEND
};
