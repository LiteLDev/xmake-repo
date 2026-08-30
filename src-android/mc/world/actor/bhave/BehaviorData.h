#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BehaviorData {
public:
    // BehaviorData inner types declare
    // clang-format off
    struct DataProxy;
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
        ::ll::TypedStorage<8, 24, std::string>             mId;
        ::ll::TypedStorage<1, 1, ::BehaviorData::DataType> mType;
        // NOLINTEND

    public:
        // prevent constructor by default
        DataProxy();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~DataProxy();

        virtual std::unique_ptr<BehaviorData::DataProxy> copy() = 0;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<BehaviorData::DataProxy>>> mData;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<BehaviorData::DataProxy>>>                     mDataStack;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void copyData(std::string const&, std::string const&, ::BehaviorData&);

    MCNAPI bool hasDataOfType(std::string const&, ::BehaviorData::DataType) const;
    // NOLINTEND
};
