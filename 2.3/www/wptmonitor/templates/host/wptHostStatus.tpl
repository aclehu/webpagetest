<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
  {include file="headIncludes.tpl"}
  <title>Status</title>
</head>
<body>
<div class="page">
  {include file='header.tpl'}
  {include file='navbar.tpl'}
  <div id="main">
    <div class="level_2">
      <div class="content-wrap">
        <div class="content" style="height:auto; overflow:auto;width:inherit;">
          <br>
          <h2 class="cufon-dincond_black">Queue Status</h2>
          <table class="pretty" style="border-collapse:collapse" width="100%">
            <thead>
            <th align="left">Host</th>
            <th align="left">ID</th>
            <th align="left">Label</th>
            <th align="left">Browser</th>
            <th align="right">Run Rate *</th>
            <th align="right">Testers</th>
            <th align="right">In Queue</th>
            <th align="right">High</th>
            <th align="right">Low</th>
            <th></th>
            </thead>
            {foreach from=$locations item=location}
            {if $eo == "even"} {assign var="eo" value="odd"} {else} {assign var="eo" value= "even"}{/if}
            {assign value="#98fb98" var="bgcolor"}
            {if $location.PendingTests > $location.GreenLimit}{assign value="yellow" var=bgcolor}{/if}
            {if $location.PendingTests > $location.YellowLimit}{assign value="red" var=bgcolor}{/if}
              <tr class="{$eo}">
                <td>{$location.host}</td>
                <td>{$location.id}</td>
                <td>{$location.Label}</td>
                <td>{$location.Browser}</td>
                <td align="right">{$location.runRate}</td>
                <td align="right">{$location.AgentCount}</td>
                <td align="right">{$location.PendingTests}</td>
                <td align="right">{$location.PendingTestsHighPriority}</td>
                <td align="right">{$location.PendingTestsLowPriority}</td>
                <td style="opacity:0.6;background-color:{$bgcolor}"></td>
              </tr>
            {/foreach}
          </table>
          <br>
          <h2 class="cufon-dincond_black">WPTMonitor Status</h2>
          <table class="pretty" style="border-collapse::collapse" width="100%">
            <thead>
            <th align="left">Username</th>
            <th align="right">Jobs</th>
            <th align="right">Active Jobs</th>
            <th align="right">Run Rate *</th>
            </thead>
          {*{foreach $runRateInfo.runRatePerUser as $user=>$runRate}*}
            {foreach $runRateInfo.users as $user}
            {if $eo == "even"} {assign var="eo" value="odd"} {else} {assign var="eo" value= "even"}{/if}
            {assign value="#98fb98" var="bgcolor"}
            <tr class="{$eo}">
              <td nowrap="true">{$user}</td>
              <td align="right">{if $runRateInfo.jobsPerUser[$user]}{$runRateInfo.jobsPerUser[$user]}{else}0{/if}</td>
              <td align="right">{if $runRateInfo.activeJobsPerUser[$user]}{$runRateInfo.activeJobsPerUser[$user]}{else}0{/if}</td>
              <td align="right" nowrap="true">{if $runRateInfo.runRatePerUser[$user]}{$runRateInfo.runRatePerUser[$user]}{else}0{/if}</td>
            </tr>
          {/foreach}
            <tr><td colspan="4"><hr></td></tr>
            <tr class="even" style="font-weight:bold;">
              <td align="right">Total</td>
              <td align="right">{$runRateInfo.totalJobs}</td>
              <td align="right" nowrap="true">{$runRateInfo.totalActiveJobs}</td>
              <td align="right" nowrap="true">{$runRateInfo.hourlyRunRate}</td>
            </tr>
          </table>
          <br>
          <br>
          <h2 class="cufon-dincond_black">Tester Status</h2>
          <table class="pretty" style="border-collapse:collapse" width="100%">
            <thead>
              <th></th>
              <th align="right">Tester</th>
              <th align="center">PC</th>
              <th align="right">EC2 Instance</th>
              <th align="right">IP</th>
              <th align="right">Busy</th>
              <th align="right">Last Check</th>
              <th align="right">Last Work</th>
            </thead>
            {foreach from=$testers item=tester}
              <tr><td colspan="8" nowrap="true" bgcolor="#f5f5dc"><h4 style="font-size: medium;">{$tester.id}</h4></td></tr>
                {foreach from=$tester.Agents item=agent}
                  {if $eo == "even"} {assign var="eo" value="odd"} {else} {assign var="eo" value= "even"}{/if}
                  {assign value="#98fb98" var="bgcolor"}

                  <tr class="{$eo}">
                    <td></td>
                    <td align="right">{$agent.index}</td>
                    <td align="center">{$agent.pc}</td>
                    <td align="right">{$agent.ec2}</td>
                    <td align="right">{$agent.ip}</td>
                    <td align="right">{$agent.busy}</td>
                    <td align="right">{$agent.elapsed}</td>
                    <td align="right">{$agent.last}</td>
                  </tr>
                {/foreach}
            {/foreach}
          </table>
          <br>

          <h4>* Run rates are per hour.</h4>
        </div>
      </div>
    </div>
  </div>
</div>
</body>
</html>
