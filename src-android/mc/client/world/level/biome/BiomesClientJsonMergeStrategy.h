#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/JsonMergeStrategy.h"

// auto generated forward declare list
// clang-format off
class LoadedResourceData;
namespace Json { class Value; }
// clang-format on

class BiomesClientJsonMergeStrategy : public ::JsonMergeStrategy {
public:
    // prevent constructor by default
    BiomesClientJsonMergeStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BiomesClientJsonMergeStrategy();

    virtual void mergeFiles(std::vector<LoadedResourceData> const&);

    virtual void _preMergeTransform(::Json::Value&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $mergeFiles(std::vector<LoadedResourceData> const&);

    MCNAPI void $_preMergeTransform(::Json::Value&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
