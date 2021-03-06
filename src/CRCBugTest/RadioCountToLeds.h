/*
 * "Copyright (c) 2004-2005 The Regents of the University  of California.
 * All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written agreement is
 * hereby granted, provided that the above copyright notice, the following
 * two paragraphs and the author appear in all copies of this software.
 *
 * IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT
 * OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF THE UNIVERSITY OF
 * CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * THE UNIVERSITY OF CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE UNIVERSITY OF CALIFORNIA HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS."
 *
 * Copyright (c) 2002-2003 Intel Corporation
 * All rights reserved.
 *
 * This file is distributed under the terms in the attached INTEL-LICENSE
 * file. If you do not find these files, copies can be found by writing to
 * Intel Research Berkeley, 2150 Shattuck Avenue, Suite 1300, Berkeley, CA,
 * 94704.  Attention:  Intel License Inquiry.
 */

#ifndef RADIO_COUNT_TO_LEDS_H
#define RADIO_COUNT_TO_LEDS_H

#define CC2420_HW_SECURITY 1

typedef nx_struct radio_count_msg {
  nx_uint16_t counter;
  nx_uint16_t counter2[20];
} radio_count_msg_t;

enum {
  AM_RADIO_COUNT_MSG = 0xaa,
};

typedef nx_struct CommandMsg {
	nx_uint8_t command_code;
	nx_uint8_t command_version;
	nx_uint16_t command_id;
	nx_uint8_t reply_on_command;
	nx_uint16_t reply_on_command_id;
	nx_uint16_t command_data;
	nx_uint16_t command_data_next[4];
} CommandMsg;


enum {
  AM_TEST_SERIAL_MSG = 0x89,
  AM_COMMANDMSG = 14,
};

enum {
	COMMAND_IDENTIFY = 2,
	COMMAND_RESET = 3,
	COMMAND_ACK = 6, 
	
	// request response protocol to measure RTT of channel, should be as fast as possible
	COMMAND_PING=37, 
	
	// packet using security was received, report about it
	COMMAND_ENC_REPORT=40
};


#endif
