#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/FilterSubject.h"
#include "mc/world/filters/FilterGroup.h"
#include "mc/world/filters/FilterOperator.h"
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
class Actor;
class FilterInput;
struct VariantParameterListConst;
namespace Json { class Value; }
// clang-format on

class ActorFilterGroup : public ::FilterGroup {
public:
    // ActorFilterGroup inner types declare
    // clang-format off
    struct LegacyMapping;
    // clang-format on

    // ActorFilterGroup inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum Processing : uint {
#else // @header-generator platform
    enum class Processing : int {
#endif // @header-generator platform
        Default     = 0,
        ReadValue   = 1,
        ReadString  = 2,
        Environment = 3,
        Item        = 4,
        Armor       = 5,
        Equipment   = 6,
    };

    struct LegacyMapping {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<4, 4>                                     mType;
        ::ll::UntypedStorage<8, 8>                                     mFilterDef;
#else // @header-generator platform
        ::ll::TypedStorage<4, 4, ::FilterGroup::CollectionType>        mType;
        ::ll::TypedStorage<8, 8, ::FilterTest::Definition const&>      mFilterDef;
#endif // @header-generator platform
        ::ll::TypedStorage<2, 2, ::SharedTypes::Legacy::FilterSubject> mSubject;
        ::ll::TypedStorage<2, 2, ::FilterOperator>                     mOperator;
        ::ll::TypedStorage<4, 4, ::ActorFilterGroup::Processing>       mProcess;
        // NOLINTEND

    public:
        // prevent constructor by default
        LegacyMapping& operator=(LegacyMapping const&);
        LegacyMapping(LegacyMapping const&);
        LegacyMapping();
    };

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ActorFilterGroup();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ActorFilterGroup();
#else // @header-generator platform
    virtual bool parse(::Json::Value const& jsonVal) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool parse(::Json::Value const&);

    virtual std::shared_ptr<FilterGroup> _createSubgroup(::FilterGroup::CollectionType) const;
#else // @header-generator platform
    virtual ::std::shared_ptr<::FilterGroup> _createSubgroup(::FilterGroup::CollectionType type) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _addLegacyFilter(std::string const&, ::ActorFilterGroup::LegacyMapping const&, ::FilterInput const&);
#else // @header-generator platform
    MCAPI bool _addLegacyFilter(
        ::std::string const&                     name,
        ::ActorFilterGroup::LegacyMapping const& legacy,
        ::FilterInput const&                     filterInput
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _parseMemberCollectionJSONCpp(::FilterGroup::CollectionType, ::Json::Value const&);
#else // @header-generator platform
    MCAPI bool
    _parseMemberCollectionJSONCpp(::FilterGroup::CollectionType collectionType, ::Json::Value const& jsonVal);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _parseObjectJSONCpp(std::string const&, ::Json::Value const&);
#else // @header-generator platform
    MCAPI bool _parseObjectJSONCpp(::std::string const& name, ::Json::Value const& jsonVal);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _processLegacyArray(std::string const&, ::Json::Value const&, ::ActorFilterGroup::LegacyMapping const&);
#else // @header-generator platform
    MCAPI bool _processLegacyArray(
        ::std::string const&                     name,
        ::Json::Value const&                     jsonVal,
        ::ActorFilterGroup::LegacyMapping const& legacy
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool
    _processLegacyMember(std::string const&, ::Json::Value const&, ::ActorFilterGroup::LegacyMapping const&);
#else // @header-generator platform
    MCAPI bool _processLegacyMember(
        ::std::string const&                     name,
        ::Json::Value const&                     jsonVal,
        ::ActorFilterGroup::LegacyMapping const& legacy
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool evaluateActor(::Actor const&, ::VariantParameterListConst const&) const;
#else // @header-generator platform
    MCAPI bool evaluateActor(::Actor const& e, ::VariantParameterListConst const& params) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void initialize();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void initialize();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $parse(::Json::Value const&);
#else // @header-generator platform
    MCAPI bool $parse(::Json::Value const& jsonVal);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<FilterGroup> $_createSubgroup(::FilterGroup::CollectionType) const;
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::FilterGroup> $_createSubgroup(::FilterGroup::CollectionType type) const;


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
