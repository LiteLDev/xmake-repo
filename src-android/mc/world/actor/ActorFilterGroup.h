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
    enum Processing : uint {
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
        ::ll::UntypedStorage<4, 4>                                     mType;
        ::ll::UntypedStorage<8, 8>                                     mFilterDef;
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
    // prevent constructor by default
    ActorFilterGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorFilterGroup();

    virtual bool parse(::Json::Value const&);

    virtual std::shared_ptr<FilterGroup> _createSubgroup(::FilterGroup::CollectionType) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _addLegacyFilter(std::string const&, ::ActorFilterGroup::LegacyMapping const&, ::FilterInput const&);

    MCNAPI bool _parseMemberCollectionJSONCpp(::FilterGroup::CollectionType, ::Json::Value const&);

    MCNAPI bool _parseObjectJSONCpp(std::string const&, ::Json::Value const&);

    MCNAPI bool _processLegacyArray(std::string const&, ::Json::Value const&, ::ActorFilterGroup::LegacyMapping const&);

    MCNAPI bool
    _processLegacyMember(std::string const&, ::Json::Value const&, ::ActorFilterGroup::LegacyMapping const&);

    MCNAPI bool evaluateActor(::Actor const&, ::VariantParameterListConst const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void initialize();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $parse(::Json::Value const&);

    MCNAPI std::shared_ptr<FilterGroup> $_createSubgroup(::FilterGroup::CollectionType) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
