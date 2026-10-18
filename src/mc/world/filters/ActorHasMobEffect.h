#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class MobEffect;
#else // @header-generator platform
#endif // @header-generator platform
struct FilterContext;
struct FilterInputs;
namespace Json { class Value; }
// clang-format on

class ActorHasMobEffect : public ::FilterTest {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::MobEffect const*> mMobEffect;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkac8dd4;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ActorHasMobEffect& operator=(ActorHasMobEffect const&);
    ActorHasMobEffect(ActorHasMobEffect const&);
    ActorHasMobEffect();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ActorHasMobEffect();
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
    virtual std::optional<std::variant<bool, int, float, std::string>> getValue() const;

    virtual ::Json::Value _serializeValue() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::Json::Value _serializeValue() const /*override*/;
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
    MCNAPI std::optional<std::variant<bool, int, float, std::string>> $getValue() const;
#else // @header-generator platform
    MCNAPI ::std::optional<::std::variant<bool, int, float, ::std::string>> $getValue() const;
#endif // @header-generator platform

    MCNAPI ::Json::Value $_serializeValue() const;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
