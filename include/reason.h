#pragma once

#define RC_SUCCESS 0
#define RC_CITIZENSHIP_EXPIRED 1
#define RC_LAND_LIMIT_EXCEEDED 2
#define RC_NO_SUCH_CITIZEN 3
#define RC_MESSAGE_LENGTH_BAD 4
#define RC_LICENSE_PASSWORD_CONTAINS_SPACE 5
#define RC_LICENSE_PASSWORD_TOO_LONG 6
#define RC_LICENSE_PASSWORD_TOO_SHORT 7
#define RC_LICENSE_RANGE_TOO_LARGE 8
#define RC_LICENSE_RANGE_TOO_SMALL 9
#define RC_LICENSE_USERS_TOO_LARGE 10
#define RC_LICENSE_USERS_TOO_SMALL 11
#define RC_LICENSE_CONTAINS_INVALID_CHAR 12
#define RC_INVALID_PASSWORD 13
#define RC_UNABLE_TO_MAIL_BACK_NUMBER 14
#define RC_LICENSE_WORLD_TOO_SHORT 15
#define RC_LICENSE_WORLD_TOO_LONG 16
#define RC_SERVER_OUT_OF_MEMORY 17
#define RC_INVALID_WORLD 20
#define RC_SERVER_OUTDATED 21
#define RC_WORLD_ALREADY_STARTED 22
#define RC_NO_SUCH_WORLD 27
#define RC_NOT_LOGGED_IN 31
#define RC_UNAUTHORIZED 32
#define RC_WORLD_ALREADY_EXISTS 33
#define RC_NO_SUCH_LICENSE 34
#define RC_IDENTITY_ALREADY_IN_USE 39
#define RC_UNABLE_TO_REPORT_LOCATION 40
#define RC_INVALID_EMAIL 41
#define RC_NO_SUCH_ACTING_CITIZEN 42
#define RC_ACTING_PASSWORD_INVALID 43
#define RC_UNIVERSE_FULL 45
#define RC_BILLING_TIMEOUT 46
#define RC_BILLING_RECV_FAILED 47
#define RC_BILLING_RESPONSE_INVALID 48
#define RC_BILLING_REJECTED 55
#define RC_BILLING_BLOCKED 56
#define RC_TOO_MANY_WORLDS 57
#define RC_MUST_UPGRADE 58
#define RC_BOT_LIMIT_EXCEEDED 59
#define RC_WORLD_EXPIRED 61
#define RC_CITIZEN_DOES_NOT_EXPIRE 62
#define RC_LICENSE_STARTS_WITH_NUMBER 64
#define RC_NO_SUCH_EJECTION 66
#define RC_NO_SUCH_SESSION 67
#define RC_EJECTION_EXPIRED 69
#define RC_ACTING_CITIZEN_EXPIRED 70
#define RC_ALREADY_STARTED 71
#define RC_WORLD_RUNNING 72
#define RC_WORLD_NOT_SET 73
#define RC_NO_SUCH_CELL 74
#define RC_NO_REGISTRY 75
#define RC_CANT_OPEN_REGISTRY 76
#define RC_CITIZEN_DISABLED 77
#define RC_WORLD_DISABLED 78
#define RC_BETA_REQUIRED 79
#define RC_ACTING_CITIZEN_DISABLED 80
#define RC_INVALID_USER_COUNT 81
#define RC_PRIVATE_WORLD 91
#define RC_NO_TOURISTS 92
#define RC_EMAIL_CONTAINS_INVALID_CHAR 100
#define RC_EMAIL_ENDS_WITH_BLANK 101
#define RC_NO_SUCH_OBJECT 101
#define RC_EMAIL_MISSING_DOT 102
#define RC_NOT_DELETE_OWNER 102
#define RC_EMAIL_MISSING_AT 103
#define RC_EMAIL_STARTS_WITH_BLANK 104
#define RC_EMAIL_TOO_LONG 105
#define RC_EMAIL_TOO_SHORT 106
#define RC_NAME_ALREADY_USED 107
#define RC_NAME_CONTAINS_NONALPHANUMERIC_CHAR 108
#define RC_NAME_CONTAINS_INVALID_BLANK 109
#define RC_NAME_DOESNT_EXIST 110
#define RC_NAME_ENDS_WITH_BLANK 111
#define RC_NAME_TOO_LONG 112
#define RC_NAME_TOO_SHORT 113
#define RC_NAME_UNUSED 114
#define RC_PASSWORD_TOO_LONG 115
#define RC_PASSWORD_TOO_SHORT 116
#define RC_PASSWORD_WRONG 117
#define RC_UNABLE_TO_DELETE_NAME 119
#define RC_UNABLE_TO_GET_CITIZEN 120
#define RC_UNABLE_TO_INSERT_CITIZEN 121
#define RC_UNABLE_TO_INSERT_NAME 122
#define RC_UNABLE_TO_PUT_CITIZEN_COUNT 123
#define RC_UNABLE_TO_DELETE_CITIZEN 124
#define RC_NUMBER_ALREADY_USED 126
#define RC_NUMBER_OUT_OF_RANGE 127
#define RC_PRIVILEGE_PASSWORD_IS_TOO_SHORT 128
#define RC_PRIVILEGE_PASSWORD_IS_TOO_LONG 129
#define RC_NOT_CHANGE_OWNER 203
#define RC_CANT_FIND_OLD_ELEMENT 204
#define RC_UNABLE_TO_CHANGE_ATTRIBUTE 210
#define RC_CANT_CHANGE_OWNER 211
#define RC_IMPOSTER 212
#define RC_INVALID_REQUEST 213
#define RC_CANT_BUILD_HERE 216
#define RC_ENCROACHES 300
#define RC_OBJECT_TYPE_INVALID 301
#define RC_TOO_MANY_BYTES 303
#define RC_UNABLE_TO_STORE 305
#define RC_UNREGISTERED_OBJECT 306
#define RC_ELEMENT_ALREADY_EXISTS 308
#define RC_RESTRICTED_COMMAND 309
#define RC_NO_BUILD_RIGHTS 310
#define RC_OUT_OF_BOUNDS 311
#define RC_RESTRICTED_OBJECT 313
#define RC_RESTRICTED_AREA 314
#define RC_OUT_OF_MEMORY 400
#define RC_NOT_YET 401
#define RC_TIMEOUT 402
#define RC_NULL_POINTER 403
#define RC_UNABLE_TO_CONTACT_UNIVERSE 404
#define RC_UNABLE_TO_CONTACT_WORLD 405
#define RC_INVALID_WORLD_NAME 406
#define RC_SEND_FAILED 415
#define RC_RECEIVE_FAILED 416
#define RC_STREAM_EMPTY 421
#define RC_STREAM_MESSAGE_TOO_LONG 422
#define RC_WORLD_NAME_TOO_LONG 423
#define RC_MESSAGE_TOO_LONG 426
#define RC_TOO_MANY_RESETS 427
#define RC_UNABLE_TO_CREATE_SOCKET 428
#define RC_UNABLE_TO_CONNECT 429
#define RC_UNABLE_TO_SET_NONBLOCKING 430
#define RC_CANT_OPEN_STREAM 434
#define RC_CANT_WRITE_STREAM 435
#define RC_CANT_CLOSE_STREAM 436
#define RC_NO_CONNECTION 439
#define RC_UNABLE_TO_INITIALIZE_NETWORK 442
#define RC_INCORRECT_MESSAGE_LENGTH 443
#define RC_NOT_INITIALIZED 444
#define RC_NO_INSTANCE 445
#define RC_OUT_BUFFER_FULL 446
#define RC_INVALID_CALLBACK 447
#define RC_INVALID_ATTRIBUTE 448
#define RC_TYPE_MISMATCH 449
#define RC_STRING_TOO_LONG 450
#define RC_READ_ONLY 451
#define RC_UNABLE_TO_REGISTER_RESOLVE 452
#define RC_INVALID_INSTANCE 453
#define RC_VERSION_MISMATCH 454
#define RC_IN_BUFFER_FULL 461
#define RC_PROTOCOL_ERROR 463
#define RC_QUERY_IN_PROGRESS 464
#define RC_WORLD_FULL 465
#define RC_EJECTED 466
#define RC_NOT_WELCOME 467
#define RC_UNABLE_TO_BIND 468
#define RC_UNABLE_TO_LISTEN 469
#define RC_UNABLE_TO_ACCEPT 470
#define RC_CONNECTION_LOST 471
#define RC_NO_STREAM 473
#define RC_NOT_AVAILABLE 474
#define RC_OLD_UNIVERSE 487
#define RC_OLD_WORLD 488
#define RC_WORLD_NOT_RUNNING 489
#define RC_CANT_RESOLVE_UNIVERSE_HOST 500
#define RC_INVALID_ARGUMENT 505
#define RC_WORLD_INSTANCE_ALREADY_EXISTS 521
#define RC_WORLD_INSTANCE_INVALID 522
#define RC_EMAIL_CHANGE_NOT_ALLOWED 525
#define RC_NAME_CHANGE_NOT_ALLOWED 526
#define RC_EMAIL_ALREADY_USED 527
#define RC_EMAIL_NOT_ALLOWED 528
#define RC_WORLD_REDIRECT 529
#define RC_DATABASE_ERROR 600
