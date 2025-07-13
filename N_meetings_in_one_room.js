class Solution {
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    maxMeetings(start, end) {
      let activities = [];
      
      if(start.length ==0) return 0;
      if(start.length ==1) return 1;
      
      for(let i=0;i<start.length ; i++){
          activities.push({start:start[i],end:end[i]});
      }
      
      // sort the item based on end time 
      activities.sort((a,b)=>a.end - b.end);
      let meetEnd = activities[0].end;
      let cnt=1;
      
      for(let i=1;i< start.length;i++){
          if(activities[i].start > meetEnd){
              cnt++;
              meetEnd=activities[i].end;
          }else{
              continue;
          }
      }
      
      return cnt;
      
    }
}
