#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/CompoundMeasurement.h"
#include "mc/events/Measurements.h"
#include "mc/events/Properties.h"
#include "mc/events/Property.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/platform/brstd/function_ref.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AppPlatform;
#else // @header-generator platform
#endif // @header-generator platform
namespace Json { class Value; }
namespace Social::Events { class Measurement; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
namespace Social::Events { class Property; }
#endif // @header-generator platform
// clang-format on

namespace Social::Events {

class Event {
public:
    // Event inner types define
    enum class AggregationMode : int {
        None                        = 0,
        Aggregate                   = 1,
        AggregateByUniqueProperties = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 4, uint> mUserId;
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<4, 4, ::Social::Events::Event::AggregationMode> mAggregationMode;
    ::ll::TypedStorage<4, 4, uint> mCustomAggregationTime;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mAggregationStartTime;
    ::ll::TypedStorage<8, 8, long> mTimestamp;
    ::ll::TypedStorage<4, 4, int> mEventTags;
    ::ll::UntypedStorage<8, 48> mDynamicProperties;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, Social::Events::Property>> mCommonProperties;
    ::ll::TypedStorage<8, 24, ::Social::Events::Properties> mUniqueProperties;
    ::ll::TypedStorage<8, 24, ::Social::Events::Measurements> mMeasurements;
    ::ll::UntypedStorage<8, 48> mCompoundMeasurements;
    ::ll::TypedStorage<1, 1, bool> mRecordStamped;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk34803d;
    ::ll::UntypedStorage<8, 32> mUnka3e2d1;
    ::ll::UntypedStorage<4, 4>  mUnkb6490e;
    ::ll::UntypedStorage<4, 4>  mUnk4d8050;
    ::ll::UntypedStorage<8, 8>  mUnked1ee5;
    ::ll::UntypedStorage<8, 8>  mUnk406331;
    ::ll::UntypedStorage<4, 4>  mUnk510604;
    ::ll::UntypedStorage<8, 48> mUnkf0c7bf;
    ::ll::UntypedStorage<8, 64> mUnk1c9391;
    ::ll::UntypedStorage<8, 24> mUnkcc0cdb;
    ::ll::UntypedStorage<8, 24> mUnk3c667f;
    ::ll::UntypedStorage<8, 48> mUnkfc2d75;
    ::ll::UntypedStorage<1, 1>  mUnkab0bd8;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Event& operator=(Event const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    Event(Event const&);
#endif // @header-generator platform
    Event();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Event(::Social::Events::Event const&);
#else // @header-generator platform
    MCNAPI Event(
        uint                                                              id,
        ::std::string const&                                              eventName,
        ::std::unordered_map<::std::string, ::Social::Events::Property>&& commonProperties,
        int                                                               eventTags
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Event(uint, std::string const&, std::unordered_map<std::string, Social::Events::Property>&&, int);
#else // @header-generator platform
    MCNAPI bool _areUniquePropertiesEqual(::Social::Events::Event const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addOrUpdateCompoundMeasurement(std::string const&, ::Social::Events::CompoundMeasurement&&);
#else // @header-generator platform
    MCNAPI void addMeasurement(::Social::Events::Measurement const& measurement);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addMeasurement(::Social::Events::Measurement const&);
#else // @header-generator platform
    MCNAPI void addProperty(::Social::Events::Property const& property, bool isUniqueProperty);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addProperty(::Social::Events::Property const&, bool);

    MCNAPI void forEachProperty(::brstd::function_ref<void(const Social::Events::Property&)>) const;

    MCNAPI ::brstd::flat_map<
        std::string,
        std::vector<Social::Events::Property>,
        std::less<std::string>,
        std::vector<std::string>,
        std::vector<std::vector<Social::Events::Property>>>
    getCompoundsAsDynamicProperties() const;

    MCNAPI std::optional<std::reference_wrapper<const Social::Events::Property>> getProperty(std::string const&) const;

    MCNAPI uint getUserId() const;

    MCNAPI bool hasEventTags(int) const;

    MCNAPI bool hasMeasurements() const;

    MCNAPI ::Json::Value measurementsAsJsonValue() const;

    MCNAPI bool passesFilter(int) const;

    MCNAPI ::Json::Value propertiesAsJsonValue() const;

    MCNAPI ~Event();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::Json::Value measurementsAsJsonValue() const;

    MCNAPI ::Json::Value propertiesAsJsonValue() const;

    MCNAPI ~Event();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Social::Events::Event const&);

    MCNAPI void* $ctor(uint, std::string const&, std::unordered_map<std::string, Social::Events::Property>&&, int);
#else // @header-generator platform
    MCNAPI void* $ctor(
        uint                                                              id,
        ::std::string const&                                              eventName,
        ::std::unordered_map<::std::string, ::Social::Events::Property>&& commonProperties,
        int                                                               eventTags
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Social::Events
