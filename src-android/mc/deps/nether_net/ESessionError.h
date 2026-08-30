#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

enum ESessionError : uint {
    eSessionErrorNone                                       = 0,
    eSessionErrorDestinationNotLoggedIn                     = 1,
    eSessionErrorNegotiationTimeout                         = 2,
    eSessionErrorWrongTransportVersion                      = 3,
    eSessionErrorFailedToCreatePeerConnection               = 4,
    eSessionErrorICE                                        = 5,
    eSessionErrorConnectRequest                             = 6,
    eSessionErrorConnectResponse                            = 7,
    eSessionErrorCandidateAdd                               = 8,
    eSessionErrorInactivityTimeout                          = 9,
    eSessionErrorFailedToCreateOffer                        = 10,
    eSessionErrorFailedToCreateAnswer                       = 11,
    eSessionErrorFailedToSetLocalDescription                = 12,
    eSessionErrorFailedToSetRemoteDescription               = 13,
    eSessionErrorNegotiationTimeoutWaitingForResponse       = 14,
    eSessionErrorNegotiationTimeoutWaitingForAccept         = 15,
    eSessionErrorIncomingConnectionIgnored                  = 16,
    eSessionErrorSignalingParsingFailure                    = 17,
    eSessionErrorSignalingUnknownError                      = 18,
    eSessionErrorSignalingUnicastMessageDeliveryFailed      = 19,
    eSessionErrorSignalingBroadcastDeliveryFailed           = 20,
    eSessionErrorSignalingMessageDeliveryFailed             = 21,
    eSessionErrorSignalingTurnAuthFailed                    = 22,
    eSessionErrorSignalingFallbackToBestEffortDelivery      = 23,
    eSessionErrorNoSignalingChannel                         = 24,
    eSessionErrorNotLoggedIn                                = 25,
    eSessionErrorSignalingFailedToSend                      = 26,
    eRelayServerConfigurationResultFailure                  = 27,
    eRelayServerConfigurationResultParsingErrorNoUrls       = 28,
    eRelayServerConfigurationResultParsingErrorNoCreds      = 29,
    eRelayServerConfigurationResultParsingErrorNoServers    = 30,
    eRelayServerConfigurationResultParsingErrorNoExpiration = 31,
    eSessionErrorDataChannelClosed                          = 32,
    eInternalErrorJsonSerialization                         = 33,
    eSessionErrorInvalidArgument                            = 34,
    eSessionErrorGenericFailure                             = 35,
    eSessionErrorFailedToCreateIdentityAssertion            = 36,
    eSessionErrorIdentityNotAllowed                         = 37,
};

}
