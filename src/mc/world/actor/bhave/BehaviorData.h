#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockPos;
class Vec3;
// clang-format on
#endif // @header-generator platform

class BehaviorData {
public:
    // BehaviorData inner types declare
    // clang-format off
    struct DataProxy;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    template<typename T0> struct Data;
#endif // @header-generator platform
    // clang-format on

    // BehaviorData inner types define
    enum class DataType : uchar {
        BlockPosition = 0,
        Boolean       = 1,
        Float         = 2,
        Int           = 3,
        String        = 4,
        Vector3       = 5,
        VoidPointer   = 6,
    };

    struct DataProxy {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>             mId;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string>           mId;
#endif // @header-generator platform
        ::ll::TypedStorage<1, 1, ::BehaviorData::DataType> mType;
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        DataProxy();

    public:
#else // @header-generator platform
#endif // @header-generator platform
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~DataProxy();
#else // @header-generator platform
        virtual ~DataProxy() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::unique_ptr<BehaviorData::DataProxy> copy() = 0;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual ::std::unique_ptr<::BehaviorData::DataProxy> copy() = 0;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    template <typename T0>
    struct Data {};

    using DataProxy = ::BehaviorData::DataProxy;

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<BehaviorData::DataProxy>>> mData;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<BehaviorData::DataProxy>>>                     mDataStack;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::BehaviorData::DataProxy>>> mData;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::BehaviorData::DataProxy>>> mDataStack;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void copyData(std::string const&, std::string const&, ::BehaviorData&);
#else // @header-generator platform
    MCAPI void copyData(::std::string const& from, ::std::string const& to, ::BehaviorData& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasDataOfType(std::string const&, ::BehaviorData::DataType) const;
#else // @header-generator platform
    MCAPI bool hasData(::std::string const& strId) const;

    MCAPI bool hasDataOfType(::std::string const& strId, ::BehaviorData::DataType type) const;

    MCAPI ~BehaviorData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
