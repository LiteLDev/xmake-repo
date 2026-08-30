#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterCollectionGroup.h"
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
class FilterInput;
class FilterTest;
struct FilterContext;
struct FilterInputs;
struct FilterParamDefinition;
namespace Json { class Value; }
namespace SharedTypes::v1_21_20 { struct FilterGroupData; }
namespace SharedTypes::v1_21_20 { struct FilterTestData; }
// clang-format on

class FilterGroup {
public:
    // FilterGroup inner types define
    enum CollectionType : uint {
        AND = 0,
        OR  = 1,
        NOT = 2,
    };

    using Ptr = std::shared_ptr<FilterGroup>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::FilterGroup::CollectionType>              mCollectionType;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<FilterGroup>>> mChildren;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<FilterTest>>>  mMembers;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FilterGroup();

    virtual bool parse(::Json::Value const&);

    virtual std::shared_ptr<FilterGroup> _createSubgroup(::FilterGroup::CollectionType) const = 0;

    virtual bool _setupContext(::FilterTest const&, ::FilterContext&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _parseFilterInputs(
        ::SharedTypes::v1_21_20::FilterTestData const&,
        ::FilterTest::Definition const&,
        ::FilterInputs&
    );

    MCNAPI bool _parseFilterParam(
        std::string const&,
        std::string const&,
        std::optional<std::variant<bool, int, float, std::string>>,
        ::FilterParamDefinition const&,
        ::FilterInput&
    );

    MCNAPI bool _parseTest(::SharedTypes::v1_21_20::FilterTestData const&);

    MCNAPI bool addFilterTest(std::string const&, ::FilterInputs const&);

    MCNAPI bool addFilterTest(::FilterTest::Definition const&, ::FilterInputs const&);

    MCNAPI bool empty() const;

    MCNAPI bool evaluate(std::array<FilterContext, 10>&) const;

    MCNAPI void fillFromData(::SharedTypes::v1_21_20::FilterGroupData const&);

    MCNAPI std::vector<std::shared_ptr<FilterGroup>> const& getChildren() const;

    MCNAPI ::FilterGroup::CollectionType getCollectionType() const;

    MCNAPI std::vector<std::shared_ptr<FilterTest>> const& getMembers() const;

    MCNAPI void serialize(::Json::Value&) const;
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

    MCNAPI bool $_setupContext(::FilterTest const&, ::FilterContext&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
