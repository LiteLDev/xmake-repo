#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterCollectionGroup.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    enum CollectionType : uint {
        AND = 0,
        OR  = 1,
        NOT = 2,
#else // @header-generator platform
    enum class CollectionType : int {
        And = 0,
        Or  = 1,
        Not = 2,
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using Ptr = std::shared_ptr<FilterGroup>;
#else // @header-generator platform
    using Ptr = ::std::shared_ptr<::FilterGroup>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::FilterGroup::CollectionType>              mCollectionType;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<FilterGroup>>> mChildren;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<FilterTest>>>  mMembers;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::FilterGroup::CollectionType>                    mCollectionType;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::FilterGroup>>> mChildren;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::FilterTest>>>  mMembers;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FilterGroup();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool parse(::Json::Value const&);
#else // @header-generator platform
    virtual bool parse(::Json::Value const& jsonVal);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<FilterGroup> _createSubgroup(::FilterGroup::CollectionType) const = 0;
#else // @header-generator platform
    virtual ::std::shared_ptr<::FilterGroup> _createSubgroup(::FilterGroup::CollectionType type) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _setupContext(::FilterTest const&, ::FilterContext&) const;
#else // @header-generator platform
    virtual bool _setupContext(::FilterTest const& test, ::FilterContext& context) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _parseFilterInputs(
        ::SharedTypes::v1_21_20::FilterTestData const&,
        ::FilterTest::Definition const&,
        ::FilterInputs&
#else // @header-generator platform
    MCAPI bool _parseFilterParam(
        ::std::string const&                                             filter,
        ::std::string const&                                             member,
        ::std::optional<::std::variant<bool, int, float, ::std::string>> param,
        ::FilterParamDefinition const&                                   paramDef,
        ::FilterInput&                                                   input
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _parseFilterParam(
        std::string const&,
        std::string const&,
        std::optional<std::variant<bool, int, float, std::string>>,
        ::FilterParamDefinition const&,
        ::FilterInput&
#else // @header-generator platform
    MCAPI bool _parseMemberCollection(
        ::FilterGroup::CollectionType                   collectionType,
        ::SharedTypes::v1_21_20::FilterGroupData const& filterGroupData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _parseTest(::SharedTypes::v1_21_20::FilterTestData const&);
#else // @header-generator platform
    MCAPI bool _parseTest(::SharedTypes::v1_21_20::FilterTestData const& filterTestData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool addFilterTest(std::string const&, ::FilterInputs const&);
#else // @header-generator platform
    MCAPI bool addFilterTest(::FilterTest::Definition const& filterDef, ::FilterInputs const& inputs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool addFilterTest(::FilterTest::Definition const&, ::FilterInputs const&);
#else // @header-generator platform
    MCAPI bool evaluate(::std::array<::FilterContext, 10>& contextSet) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool empty() const;
#else // @header-generator platform
    MCAPI void fillFromData(::SharedTypes::v1_21_20::FilterGroupData const& filterGroupData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool evaluate(std::array<FilterContext, 10>&) const;

    MCNAPI void fillFromData(::SharedTypes::v1_21_20::FilterGroupData const&);

    MCNAPI std::vector<std::shared_ptr<FilterGroup>> const& getChildren() const;

    MCNAPI ::FilterGroup::CollectionType getCollectionType() const;

    MCNAPI std::vector<std::shared_ptr<FilterTest>> const& getMembers() const;

    MCNAPI void serialize(::Json::Value&) const;
#else // @header-generator platform
    MCAPI void serialize(::Json::Value& jsonVal) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
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
    MCNAPI bool $_setupContext(::FilterTest const&, ::FilterContext&) const;
#else // @header-generator platform
    MCAPI bool $_setupContext(::FilterTest const& test, ::FilterContext& context) const;


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
