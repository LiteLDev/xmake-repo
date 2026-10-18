#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/legacy/FilterSubject.h"
#include "mc/world/filters/FilterOperator.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
class IWorldRegistriesProvider;
struct FilterContext;
struct FilterInputs;
#if defined(LL_PLAT_A) // @header-generator platform
struct FilterParamDefinition;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>                   mName;
        ::ll::TypedStorage<8, 24, std::string>                   mDescription;
        ::ll::TypedStorage<8, 8, ::FilterParamDefinition const*> mSubjectDefinition;
        ::ll::TypedStorage<8, 8, ::FilterParamDefinition const*> mDomainDefinition;
        ::ll::TypedStorage<8, 8, ::FilterParamDefinition const*> mOperatorDefinition;
        ::ll::TypedStorage<8, 8, ::FilterParamDefinition const*> mValueDefinition;
        ::ll::UntypedStorage<8, 48>                              mFactory;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk784197;
        ::ll::UntypedStorage<8, 32> mUnkecefe1;
        ::ll::UntypedStorage<8, 8>  mUnkedef7d;
        ::ll::UntypedStorage<8, 8>  mUnke70633;
        ::ll::UntypedStorage<8, 8>  mUnk411256;
        ::ll::UntypedStorage<8, 8>  mUnkf594ea;
        ::ll::UntypedStorage<8, 64> mUnka344a1;
#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
    using Ptr = std::shared_ptr<FilterTest>;

#else // @header-generator platform
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<2, 2, ::SharedTypes::Legacy::FilterSubject> mSubject;
    ::ll::TypedStorage<2, 2, ::FilterOperator>                     mOperator;
#else // @header-generator platform
    ::ll::UntypedStorage<2, 2> mUnk20eb73;
    ::ll::UntypedStorage<2, 2> mUnk995088;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FilterTest& operator=(FilterTest const&);
    FilterTest(FilterTest const&);
    FilterTest();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FilterTest();
#else // @header-generator platform
    virtual ~FilterTest() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool setup(::FilterTest::Definition const&, ::FilterInputs const&);
#else // @header-generator platform
    virtual bool setup(::FilterTest::Definition const& definition, ::FilterInputs const& inputs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool evaluate(::FilterContext const&) const = 0;
#else // @header-generator platform
    virtual bool evaluate(::FilterContext const& context) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void finalizeParsedValue(::IWorldRegistriesProvider&);
#else // @header-generator platform
    virtual void finalizeParsedValue(::IWorldRegistriesProvider& registries);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string_view getName() const = 0;
#else // @header-generator platform
    virtual ::std::string_view getName() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<std::variant<bool, int, float, std::string>> getDomain() const;
#else // @header-generator platform
    virtual ::std::optional<::std::variant<bool, int, float, ::std::string>> getDomain() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<std::variant<bool, int, float, std::string>> getValue() const = 0;
#else // @header-generator platform
    virtual ::std::optional<::std::variant<bool, int, float, ::std::string>> getValue() const = 0;
#endif // @header-generator platform

    virtual ::Json::Value _serializeDomain() const;

    virtual ::Json::Value _serializeValue() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::FilterOperator getOperator() const;

    MCNAPI ::SharedTypes::Legacy::FilterSubject getSubject() const;

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI ::Json::Value serialize() const;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $finalizeParsedValue(::IWorldRegistriesProvider&);
#else // @header-generator platform
    MCNAPI void $finalizeParsedValue(::IWorldRegistriesProvider& registries);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::variant<bool, int, float, std::string>> $getDomain() const;
#else // @header-generator platform
    MCNAPI ::std::optional<::std::variant<bool, int, float, ::std::string>> $getDomain() const;
#endif // @header-generator platform

    MCNAPI ::Json::Value $_serializeDomain() const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND
};
