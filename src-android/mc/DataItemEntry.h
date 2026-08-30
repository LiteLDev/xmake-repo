#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/DataItemBytePayload.h"
#include "mc/DataItemCompoundTagPayload.h"
#include "mc/DataItemFloatPayload.h"
#include "mc/DataItemInt64Payload.h"
#include "mc/DataItemIntPayload.h"
#include "mc/DataItemPosPayload.h"
#include "mc/DataItemShortPayload.h"
#include "mc/DataItemStringPayload.h"
#include "mc/DataItemVec3Payload.h"

struct DataItemEntry {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, uint> mId;
    ::ll::TypedStorage<8, 40, std::variant<DataItemBytePayload, DataItemShortPayload, DataItemIntPayload, DataItemFloatPayload, DataItemStringPayload, DataItemCompoundTagPayload, DataItemPosPayload, DataItemInt64Payload, DataItemVec3Payload>> mPayload;
    // clang-format on
    // NOLINTEND
};
