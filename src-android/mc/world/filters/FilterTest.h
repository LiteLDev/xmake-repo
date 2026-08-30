#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/FilterSubject.h"
#include "mc/world/filters/FilterOperator.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class IWorldRegistriesProvider;
struct FilterContext;
struct FilterInputs;
struct FilterParamDefinition;
namespace Json { class Value; }
// clang-format on

class FilterTest {
public:
    // FilterTest inner types declare
    // clang-format off
    struct Definition;
    // clang-format on

    // FilterTest inner types define
    struct Definition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                   mName;
        ::ll::TypedStorage<8, 24, std::string>                   mDescription;
        ::ll::TypedStorage<8, 8, ::FilterParamDefinition const*> mSubjectDefinition;
        ::ll::TypedStorage<8, 8, ::FilterParamDefinition const*> mDomainDefinition;
        ::ll::TypedStorage<8, 8, ::FilterParamDefinition const*> mOperatorDefinition;
        ::ll::TypedStorage<8, 8, ::FilterParamDefinition const*> mValueDefinition;
        ::ll::UntypedStorage<8, 48>                              mFactory;
        // NOLINTEND

    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);
        Definition();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Definition();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using Ptr = std::shared_ptr<FilterTest>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::SharedTypes::Legacy::FilterSubject> mSubject;
    ::ll::TypedStorage<2, 2, ::FilterOperator>                     mOperator;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FilterTest();

    virtual bool setup(::FilterTest::Definition const&, ::FilterInputs const&);

    virtual bool evaluate(::FilterContext const&) const = 0;

    virtual void finalizeParsedValue(::IWorldRegistriesProvider&);

    virtual std::string_view getName() const = 0;

    virtual std::optional<std::variant<bool, int, float, std::string>> getDomain() const;

    virtual std::optional<std::variant<bool, int, float, std::string>> getValue() const = 0;

    virtual ::Json::Value _serializeDomain() const;

    virtual ::Json::Value _serializeValue() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::FilterOperator getOperator() const;

    MCNAPI ::SharedTypes::Legacy::FilterSubject getSubject() const;

    MCNAPI ::Json::Value serialize() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $finalizeParsedValue(::IWorldRegistriesProvider&);

    MCNAPI std::optional<std::variant<bool, int, float, std::string>> $getDomain() const;

    MCNAPI ::Json::Value $_serializeDomain() const;
    // NOLINTEND
};
